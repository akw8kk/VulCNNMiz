static void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    switch(6)
    {
    case 6:
        
        VAR1 = (int *)malloc(10*sizeof(int));
        break;
    default:
        
        FUN2("");
        break;
    }
    {
        int VAR2[10] = {0};
        
        memmove(VAR1, VAR2, 10*sizeof(int));
        FUN3(VAR1[0]);
        free(VAR1);
    }
}