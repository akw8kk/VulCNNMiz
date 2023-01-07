void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[10];
    wchar_t VAR3[10+1];
    if(VAR4)
    {
        
        VAR1 = VAR2;
        VAR1[0] = VAR5''; 
    }
    {
        wchar_t VAR6[10+1] = VAR7;
        
        
        memcpy(VAR1, VAR6, (wcslen(VAR6) + 1) * sizeof(wchar_t));
        FUN2(VAR1);
    }
}