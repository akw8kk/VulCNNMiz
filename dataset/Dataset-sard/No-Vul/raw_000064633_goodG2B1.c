static void FUN1()
{
    int * VAR1;
    int * VAR2 = (int *)FUN2(50*sizeof(int));
    int * VAR3 = (int *)FUN2(100*sizeof(int));
    if(0)
    {
        
        FUN3("");
    }
    else
    {
        
        VAR1 = VAR3;
    }
    {
        int VAR4[100] = {0}; 
        
        memmove(VAR1, VAR4, 100*sizeof(int));
        FUN4(VAR1[0]);
    }
}