void FUN1()
{
    VAR1 * VAR2;
    VAR2 = NULL;
    switch(6)
    {
    case 6:
        
        VAR2 = (VAR1 *)malloc(50*sizeof(VAR1));
        break;
    default:
        
        FUN2("");
        break;
    }
    {
        int64_t VAR3[100] = {0}; 
        
        memcpy(VAR2, VAR3, 100*sizeof(VAR1));
        FUN3(VAR2[0]);
        free(VAR2);
    }
}