void FUN1()
{
    char * VAR1;
    VAR1 = (char *)malloc(100*sizeof(char));
    while(1)
    {
        
        memset(VAR1, '', 100-1); 
        VAR1[100-1] = ''; 
        break;
    }
    {
        char VAR2[50] = "";
        
        strncpy(VAR2, VAR1, strlen(VAR1));
        VAR2[50-1] = ''; 
        FUN2(VAR1);
        free(VAR1);
    }
}