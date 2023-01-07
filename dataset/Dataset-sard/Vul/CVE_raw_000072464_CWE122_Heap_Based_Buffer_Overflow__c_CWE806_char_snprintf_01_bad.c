void FUN1()
{
    char * VAR1;
    VAR1 = (char *)malloc(100*sizeof(char));
    
    memset(VAR1, '', 100-1); 
    VAR1[100-1] = ''; 
    {
        char VAR2[50] = "";
        
        FUN2(VAR2, strlen(VAR1), "", VAR1);
        FUN3(VAR1);
        free(VAR1);
    }
}