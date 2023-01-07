static void FUN1()
{
    int * VAR1;
    void (*VAR2) (int *) = VAR3;
    int * VAR4 = (int *)FUN2(50*sizeof(int));
    int * VAR5 = (int *)FUN2(100*sizeof(int));
    
    VAR1 = VAR5;
    FUN3(VAR1);
}