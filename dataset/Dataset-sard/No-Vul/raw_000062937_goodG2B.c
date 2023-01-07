static void FUN1()
{
    int * VAR1;
    void (*VAR2) (int *) = VAR3;
    VAR1 = NULL;
    
    VAR1 = (int *)FUN2(10*sizeof(int));
    FUN3(VAR1);
}