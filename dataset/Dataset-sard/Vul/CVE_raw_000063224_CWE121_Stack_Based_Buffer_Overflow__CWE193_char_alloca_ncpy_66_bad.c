void FUN1()
{
    char * VAR1;
    char * VAR2[5];
    char * VAR3 = (char *)FUN2((10)*sizeof(char));
    char * VAR4 = (char *)FUN2((10+1)*sizeof(char));
    
    VAR1 = VAR3;
    VAR1[0] = ''; 
    
    VAR2[2] = VAR1;
    FUN3(VAR2);
}