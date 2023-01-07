static void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    if(VAR2!=5)
    {
        
        FUN2("");
    }
    else
    {
        
        VAR1 = (int *)FUN3(10*sizeof(int));
    }
    {
        int VAR3[10] = {0};
        
        memmove(VAR1, VAR3, 10*sizeof(int));
        FUN4(VAR1[0]);
    }
}