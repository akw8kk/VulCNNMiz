void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100];
    wmemset(VAR2, VAR3'', 100-1);
    VAR2[100-1] = VAR3'';
    if(1)
    {
        
        VAR1 = VAR2 - 8;
    }
    {
        wchar_t VAR4[100];
        wmemset(VAR4, VAR3'', 100-1); 
        VAR4[100-1] = VAR3''; 
        
        wcsncpy(VAR1, VAR4, 100-1);
        
        VAR1[100-1] = VAR3'';
        FUN2(VAR1);
    }
}