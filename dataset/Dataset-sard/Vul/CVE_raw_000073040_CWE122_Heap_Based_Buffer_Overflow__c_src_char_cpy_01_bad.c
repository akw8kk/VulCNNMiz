void FUN1()
{
    char * VAR1;
    VAR1 = (char *)malloc(100*sizeof(char));
    
    memset(VAR1, '', 100-1); 
    VAR1[100-1] = ''; 
    {
        char VAR2[50] = "";
        
        strcpy(VAR2, VAR1);
        FUN2(VAR1);
        free(VAR1);
    }
}