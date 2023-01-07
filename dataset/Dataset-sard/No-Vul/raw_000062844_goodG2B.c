static void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    
    VAR1 = (int *)FUN2(10*sizeof(int));
    VAR2 = VAR1;
    FUN3();
}