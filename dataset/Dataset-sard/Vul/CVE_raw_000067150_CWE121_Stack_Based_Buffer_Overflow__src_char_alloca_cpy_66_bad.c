void FUN1()
{
    char * VAR1;
    char * VAR2[5];
    char * VAR3 = (char *)FUN2(100*sizeof(char));
    VAR1 = VAR3;
    
    memset(VAR1, '', 100-1); 
    VAR1[100-1] = ''; 
    
    VAR2[2] = VAR1;
    FUN3(VAR2);
}