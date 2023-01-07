static void FUN1()
{
    char * VAR1;
    VAR1 = (char *)malloc(100*sizeof(char));
    if(VAR2)
    {
        
        memset(VAR1, '', 50-1); 
        VAR1[50-1] = ''; 
    }
    {
        char VAR3[50] = "";
        
        strncpy(VAR3, VAR1, strlen(VAR1));
        VAR3[50-1] = ''; 
        FUN2(VAR1);
        free(VAR1);
    }
}