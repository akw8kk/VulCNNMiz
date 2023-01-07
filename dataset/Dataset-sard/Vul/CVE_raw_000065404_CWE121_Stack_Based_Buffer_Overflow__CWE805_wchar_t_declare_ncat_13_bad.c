void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[50];
    wchar_t VAR3[100];
    if(VAR4==5)
    {
        
        VAR1 = VAR2;
        VAR1[0] = VAR5''; 
    }
    {
        wchar_t VAR6[100];
        wmemset(VAR6, VAR5'', 100-1); 
        VAR6[100-1] = VAR5''; 
        
        wcsncat(VAR1, VAR6, 100);
        FUN2(VAR1);
    }
}