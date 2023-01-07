void FUN1()
{
    int * VAR1;
    int * VAR2[5];
    int * VAR3 = (int *)FUN2(50*sizeof(int));
    int * VAR4 = (int *)FUN2(100*sizeof(int));
    
    VAR1 = VAR3;
    
    VAR2[2] = VAR1;
    FUN3(VAR2);
}