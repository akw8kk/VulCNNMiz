static void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    if(5!=5)
    {
        
        FUN2("");
    }
    else
    {
        
        VAR1 = (int *)FUN3(10*sizeof(int));
    }
    {
        int VAR2[10] = {0};
        
        memcpy(VAR1, VAR2, 10*sizeof(int));
        FUN4(VAR1[0]);
    }
}