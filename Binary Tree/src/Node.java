
	public class Node<E> {
		private E element; 
		private Node<E> parent;
		private Node<E> leftchild;
		private Node<E> rightchild;
		public Node(){
			element = null;
			parent = null;
			leftchild = null;
			rightchild = null;
		}
		public Node(E e, Node curparent)
		{
			element = e;
			parent = curparent;
		}
		public E getElement(){
			return element;
		}
		public Node<E> getParent(){
			return parent;
		}
		public Node<E> getlChild(){
			return leftchild;
		}
		public Node<E> getrChild(){
			return rightchild;
		}
		public void setElement(E e){
			element = e;
		}
		public void setParent(Node<E> parent1){
			parent = parent1;
		}
		public void setLeft(Node<E> lchild){
			leftchild=lchild;
		}
		public void setRight(Node<E> rchild){
			rightchild=rchild;
			
		}
		public boolean isInternal(){
			return (leftchild!=null || rightchild!=null );
		}
		public boolean isExternal(){
			return (!isInternal());
		}
		public boolean isRoot(){
			return (parent==null);
		}
	}
