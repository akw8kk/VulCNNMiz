static void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    switch(6)
    {
    case 6:
        
        VAR1 = 100-1;
        break;
    default:
        
        FUN2("");
        break;
    }
    
    if (VAR1 < 100)
    {
        
        char * VAR2 = (char *)malloc(VAR1);
        
        memset(VAR2, '', VAR1-1);
        VAR2[VAR1-1] = '';
        FUN2(VAR2);
        free(VAR2);
    }
}