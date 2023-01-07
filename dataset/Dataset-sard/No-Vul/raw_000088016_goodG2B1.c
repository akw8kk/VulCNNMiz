static void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    if(5!=5)
    {
        
        FUN2("");
    }
    else
    {
        
        VAR1 = 100-1;
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