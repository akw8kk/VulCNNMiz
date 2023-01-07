void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    goto VAR2;
VAR2:
    {
        char * VAR3 = (char *)malloc(100*sizeof(char));
        memset(VAR3, '', 100-1);
        VAR3[100-1] = '';
        
        VAR1 = VAR3 - 8;
    }
    {
        char VAR2[100];
        memset(VAR2, '', 100-1); 
        VAR2[100-1] = ''; 
        
        memmove(VAR1, VAR2, 100*sizeof(char));
        
        VAR1[100-1] = '';
        FUN2(VAR1);
        
    }
}