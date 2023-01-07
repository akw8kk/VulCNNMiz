void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(100*sizeof(char));
    VAR1 = VAR2;
    goto VAR3;
VAR3:
    
    memset(VAR1, '', 100-1); 
    VAR1[100-1] = ''; 
    {
        char VAR4[50] = "";
        
        strncat(VAR4, VAR1, strlen(VAR1));
        VAR4[50-1] = ''; 
        FUN3(VAR1);
    }
}