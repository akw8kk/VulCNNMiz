void FUN1()
{
    int VAR1;
    char * VAR2;
    VAR2 = NULL;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        {
            char * VAR3 = (char *)malloc(100*sizeof(char));
            memset(VAR3, '', 100-1);
            VAR3[100-1] = '';
            
            VAR2 = VAR3 - 8;
        }
    }
    {
        char VAR4[100];
        memset(VAR4, '', 100-1); 
        VAR4[100-1] = ''; 
        
        strcpy(VAR2, VAR4);
        FUN2(VAR2);
        
    }
}