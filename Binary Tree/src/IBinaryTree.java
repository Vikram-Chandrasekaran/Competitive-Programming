public interface IBinaryTree<E> {
	int size();
	boolean isEmpty();
	Object getRoot();
	void setRoot(Node<E> node);
	Object getNode(int pos);
	Object findNode(E val);
	void insertChild(Node<E> curnode, E elt, char type);
	void constructTree(E[] eltArray);
	void printTree();
	void inorderTraverse(Node<E> node);
	void preorderTraverse(Node<E> node);
	void postorderTraverse(Node<E> node);
	void levelorderTraverse(Node<E> node);
	int getDepth(Node<E> node);
	int getHeight(Node<E> node);
	boolean isProper(Node<E> p); //this method checks if the given tree is Proper or not
	void printExternal(Node<E> n); //it prints all the external nodes of a tree
}