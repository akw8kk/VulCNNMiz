void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    switch(6)
    {
    case 6:
        
        VAR1 = (int *)malloc(50*sizeof(int));
        break;
    default:
        
        FUN2("");
        break;
    }
    {
        int VAR2[100] = {0}; 
        
        memcpy(VAR1, VAR2, 100*sizeof(int));
        FUN3(VAR1[0]);
        free(VAR1);
    }
}