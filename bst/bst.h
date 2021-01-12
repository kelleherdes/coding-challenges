
class tree_node{
	public:
		int value;
		tree_node * left;
		tree_node * right;
		tree_node(int value);
	
};

tree_node * insert_node(tree_node * root, int value);
void print(tree_node * root);
