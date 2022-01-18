/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addEdgeLG.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:37:28 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/20 15:30:25 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedgraph.h"

int addEdgeLG(LinkedGraph* pGraph, int fromVertexID, int toVertexID)
{
	LinkedNode *dir_nextNode;
	LinkedNode *undir_nextNode;

	dir_nextNode = (LinkedNode *)calloc(1, sizeof(LinkedNode));
	if (!dir_nextNode)
		return FALSE;
	dir_nextNode->vertaxID = toVertexID;
	
	if (!pGraph)
		return (FALSE);
	
	if (checkVertexValid(pGraph, fromVertexID) 
	&& checkVertexValid(pGraph, toVertexID))
	{
		dir_nextNode->pLink = pGraph->ppAdjEdge[fromVertexID]->headNode->pLink;
		//���� dir_nextNode ����
		pGraph->ppAdjEdge[fromVertexID]->headNode->pLink = dir_nextNode;
		if (pGraph->graphType == GRAPH_UNDIRECTED)
		{
			undir_nextNode = (LinkedNode *)calloc(1, sizeof(LinkedNode));
			if (!undir_nextNode)
				return FALSE;
			undir_nextNode->vertaxID = fromVertexID;
				
			undir_nextNode->pLink = pGraph->ppAdjEdge[toVertexID]->headNode->pLink;
			//���� dir_nextNode ����
			pGraph->ppAdjEdge[toVertexID]->headNode->pLink = undir_nextNode;
		}
		pGraph->currentEdgeCount++;
		return SUCCESS;
	}
	return FAIL;
}