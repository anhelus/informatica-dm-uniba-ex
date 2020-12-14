#include <vector>
#include <queue>
#include <stdio.h>

using namespace std;

void push(int* queue, int element, int N) {
    for (int i = (N - 1); i > 0; i--) {
        queue[i] = queue[i - 1];
    }
    queue[0] = element;
}

int pop(int* queue, int N) {
    for (int i = (N - 1); i >= 0; i--) {
        if (queue[i] != NULL) {
            return queue[i];
        }
    }
    return NULL;
}

int* bfs(int vertici[], int N) {
    // TODO: init
    int visited[5];
    for (int i = 0; i <= N; i++) {
        visited[i] = 0;
    }
    int s = 0;
    visited[s] = 1;
    int* res;
    int* queue;

    push(queue, s, N);
}

int main() {
    int queue[6] = { NULL, NULL, NULL, NULL, NULL, NULL };
    push(queue, 99, 6);
    printf("%d %d %d %d\n", queue[0], queue[1], queue[2], queue[3]);
    int popped = pop(queue, 6);
    printf("popped: %d", popped);
}

//vector <int> bfs(vector<int> g[], int N) {
//    vector <bool> vis(N, false);
//    int s = 0;
//    vis[s] = true; // Initially mark source vertex as visited(true)
//    vector <int> res;
//    queue<int> q;
//    q.push(s); // Push the source vertex to queue
//
//    while (!q.empty()) // Till queue is not empty
//    {
//        int t = q.front();
//        res.push_back(t);
//
//        q.pop(); // Pop the queue front
//
//        for (int v :
//        g[t]) // Traverse through all the connected components of front
//        {
//            if (!vis[v]) { // If they are not visited, mark them visited and add
//                           // to queue
//                vis[v] = true;
//                q.push(v);
//            }
//        }
//    }
//    return res;
//}