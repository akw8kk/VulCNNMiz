void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    while(1)
    {
        {
            char * VAR2 = (char *)malloc(100*sizeof(char));
            memset(VAR2, '', 100-1);
            VAR2[100-1] = '';
            
            VAR1 = VAR2 - 8;
        }
        break;
    }
    {
        char VAR3[100];
        memset(VAR3, '', 100-1); 
        VAR3[100-1] = ''; 
        
        strncpy(VAR3, VAR1, strlen(VAR3));
        
        VAR3[100-1] = '';
        FUN2(VAR3);
        
    }
}