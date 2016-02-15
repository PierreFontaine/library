/* OPERATIONS SUR VARIABLES */

template <typename T>
void echange(T& a,T& b){
	T c;

	t = a;
	a=c;
	c=t;
}

/* OPERATIONS SUR VECTEURS */

template <typename T>
void ajoutElemVecAtPos(T v[],t& elem,int& pos,int& nbE){
	int i;
	int j;

	i = nbE;
	do{
		v[i+1] = v[i];
		i -= 1;
	} while (i<pos);
	nbE = nbE+1;
}

template <typename T>
void supprElemVecAtPos(T v[],int& pos,int& nbE){
	int i;
	for (i = pos; i < count-1; ++i){
		v[i] = [i+1];
	}
	nbE -= 1;
}

template <typename T>
void ajoutElemVecByEnd(T v[],int& nbE,T& elem){
	nbE = nbE + 1;
	v[nbE] = elem;
}

template <typename T>
void supprElemVecByEnd(T v[],int& nbE,int& pos){
	v[pos] = v[nbE-1];
	nbE -= 1;
}

/* OPERATIONS SUR MATRICES */