typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    bool rightThread;
} Node;

// Constructor function
Node* createNode(int val) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode != NULL) {
        newNode->data = val;
        newNode->left = NULL;
        newNode->right = NULL;
        newNode->rightThread = false;
    }
    return newNode;
}

