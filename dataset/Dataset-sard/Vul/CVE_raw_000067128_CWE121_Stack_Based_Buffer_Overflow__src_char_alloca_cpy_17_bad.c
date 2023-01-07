void FUN1()
{
    int VAR1;
    char * VAR2;
    char * VAR3 = (char *)FUN2(100*sizeof(char));
    VAR2 = VAR3;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        memset(VAR2, '', 100-1); 
        VAR2[100-1] = ''; 
    }
    {
        char VAR4[50] = "";
        
        strcpy(VAR4, VAR2);
        FUN3(VAR2);
    }
}