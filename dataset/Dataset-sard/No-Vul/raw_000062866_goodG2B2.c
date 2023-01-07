static void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    switch(6)
    {
    case 6:
        
        VAR1 = (int *)FUN2(10*sizeof(int));
        break;
    default:
        
        FUN3("");
        break;
    }
    {
        int VAR2[10] = {0};
        
        memcpy(VAR1, VAR2, 10*sizeof(int));
        FUN4(VAR1[0]);
    }
}