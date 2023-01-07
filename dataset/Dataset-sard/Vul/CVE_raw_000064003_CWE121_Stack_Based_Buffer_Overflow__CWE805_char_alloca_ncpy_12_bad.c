void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(50*sizeof(char));
    char * VAR3 = (char *)FUN2(100*sizeof(char));
    if(FUN3())
    {
        
        VAR1 = VAR2;
        VAR1[0] = ''; 
    }
    else
    {
        
        VAR1 = VAR3;
        VAR1[0] = ''; 
    }
    {
        char VAR4[100];
        memset(VAR4, '', 100-1); 
        VAR4[100-1] = ''; 
        
        strncpy(VAR1, VAR4, 100-1);
        VAR1[100-1] = ''; 
        FUN4(VAR1);
    }
}