//ham tim khoa x trong cay
Tree searchNode(KeyType x, Tree T){
	if(T == NULL)
		return NULL;
	else if(x == T->Key)
		return T;
	else if(x > T->Key)
		return searchNode(x, T->Left);
	else 
		return searchNode(x, T->Right);
}

//khoi tao mot cau rong
Tree initTree(){
    return NULL;	//t= NULL;
}

//tim khoa x co trong cay nhi phan
Tree findElement(DataType x, Tree T){
	if(T == NULL)	
		return NULL;
	elss if(T -> Data == x) 	
		rerturn T;
		else {
			Tree n;
			n= findElement(x, T -> Left);
			if(n == NULL)
				n= findElement(x, T -> Right);
			return n;
		}
}

//
