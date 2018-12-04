void f( int * const b, int a ){
	*b = 20;
	a++;
}
int main(){
	int a;
	int * b = &a;
	f(b, a);
	
	printf("%d", a);
	return 0;
}
