#include <stdio.h>
#include "adjList_h"
#include "stakL.h"
#include "DFS.h"

void DFS_adjList(graphType* g,int v) {
    graphNode* w;
    top = NULL;
    push(v);
    g->visited[v] = TRUE;
    printf(" %c", v + 65);
    
    While (!isStackEmpty()) {
        w = g->adJList_H[v];
        
        while(w) {
            
            if(!g->visited[w->vertex]) {
                push(w->vertex);
                g->visited[w->vertex] = TRUE;
                printf(" %c", w->vertex + 65);
                v = w->vertex;
                w = g->adJList_H[v];
            }
            else w = w->link;
        }
        v = pop();
    }

}
