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
        char VAR2[100];
        memset(VAR2, '', 100-1); 
        VAR2[100-1] = ''; 
        
        strcpy(VAR1, VAR2);
        FUN2(VAR1);
        
    }
}