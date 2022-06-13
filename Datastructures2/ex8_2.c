#include <stdio.h>
#include "adjList.h"

int main(void) {
    
    printf("\n G1의 인접 리스트");
    print_adjList(G1);
    
    printf("\n\n G2의 인접 리스트");
    print_adjList(G2);
    
    printf("\n\n G3의 인접 리스트");
    print_adjList(G3);
    
    printf("\n\n G4의 인접 리스트");
    print_adjList(G4);
    
    getchar(); return 0;
}
