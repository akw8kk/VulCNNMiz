static void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    goto VAR2;
VAR2:
    {
        char * VAR3 = (char *)malloc(100*sizeof(char));
        memset(VAR3, '', 100-1);
        VAR3[100-1] = '';
        
        VAR1 = VAR3;
    }
    {
        char VAR4[100*2];
        memset(VAR4, '', 100*2-1); 
        VAR4[100*2-1] = ''; 
        
        strcpy(VAR4, VAR1);
        FUN2(VAR4);
        
    }
}