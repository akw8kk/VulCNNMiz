static void FUN1()
{
    int * VAR1;
    int * VAR2 = (int *)FUN2(50*sizeof(int));
    int * VAR3 = (int *)FUN2(100*sizeof(int));
    if(VAR4)
    {
        
        VAR1 = VAR3;
    }
    {
        int VAR5[100] = {0}; 
        
        memmove(VAR1, VAR5, 100*sizeof(int));
        FUN3(VAR1[0]);
    }
}