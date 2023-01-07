static void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    switch(5)
    {
    case 6:
        
        FUN2("");
        break;
    default:
        
        VAR1 = (int *)malloc(10*sizeof(int));
        break;
    }
    {
        int VAR2[10] = {0};
        
        memcpy(VAR1, VAR2, 10*sizeof(int));
        FUN3(VAR1[0]);
        free(VAR1);
    }
}