static void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    if(VAR2!=5)
    {
        
        FUN2("");
    }
    else
    {
        {
            char * VAR3 = (char *)malloc(100*sizeof(char));
            memset(VAR3, '', 100-1);
            VAR3[100-1] = '';
            
            VAR1 = VAR3;
        }
    }
    {
        char VAR4[100];
        memset(VAR4, '', 100-1); 
        VAR4[100-1] = ''; 
        
        memcpy(VAR1, VAR4, 100*sizeof(char));
        
        VAR1[100-1] = '';
        FUN2(VAR1);
        
    }
}