void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[50];
    wchar_t VAR3[100];
    wmemset(VAR2, VAR4'', 50-1); 
    VAR2[50-1] = VAR4''; 
    wmemset(VAR3, VAR4'', 100-1); 
    VAR3[100-1] = VAR4''; 
    if(VAR5)
    {
        
        VAR1 = VAR2;
    }
    {
        wchar_t VAR6[100];
        wmemset(VAR6, VAR4'', 100-1);
        VAR6[100-1] = VAR4''; 
        
        memcpy(VAR6, VAR1, wcslen(VAR6)*sizeof(wchar_t));
        VAR6[100-1] = VAR4'';
        FUN2(VAR6);
    }
}