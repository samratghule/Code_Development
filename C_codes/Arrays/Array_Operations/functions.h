struct ArrayADT
 {
    int *A;
    int size;
    int length;
 };


void display(struct ArrayADT *);
void append(struct ArrayADT * ,int );
void insert(struct ArrayADT *,int , int );
void delete(struct ArrayADT *, int );
