static void FUN1()
{
    VAR1 * VAR2;
    VAR2 = NULL;
    switch(5)
    {
    case 6:
        
        FUN2("");
        break;
    default:
        
        VAR2 = (VAR1 *)malloc(100*sizeof(VAR1));
        break;
    }
    {
        int64_t VAR3[100] = {0}; 
        
        memmove(VAR2, VAR3, 100*sizeof(VAR1));
        FUN3(VAR2[0]);
        free(VAR2);
    }
}