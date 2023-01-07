void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(50*sizeof(char));
    char * VAR3 = (char *)FUN2(100*sizeof(char));
    if(VAR4)
    {
        
        VAR1 = VAR2;
        VAR1[0] = ''; 
    }
    {
        char VAR5[100];
        memset(VAR5, '', 100-1); 
        VAR5[100-1] = ''; 
        
        strcpy(VAR1, VAR5);
        FUN3(VAR1);
    }
}