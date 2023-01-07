void FUN1()
{
    int * VAR1;
    
    void (*VAR2) (int *) = VAR3;
    int VAR4[50];
    int VAR5[100];
    
    VAR1 = VAR4;
    
    FUN2(VAR1);
}