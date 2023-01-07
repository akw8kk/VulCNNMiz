static void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    if(FUN2())
    {
        
        FUN3("");
    }
    else
    {
        
        VAR1 = (int *)FUN4(10*sizeof(int));
    }
    {
        int VAR2[10] = {0};
        
        memmove(VAR1, VAR2, 10*sizeof(int));
        FUN5(VAR1[0]);
    }
}