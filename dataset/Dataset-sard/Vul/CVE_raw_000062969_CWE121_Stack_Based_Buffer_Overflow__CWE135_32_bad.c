void FUN1()
{
    void * VAR1;
    void * *VAR2 = &VAR1;
    void * *VAR3 = &VAR1;
    VAR1 = NULL;
    {
        void * VAR1 = *VAR2;
        
        VAR1 = (void *)VAR4;
        *VAR2 = VAR1;
    }
    {
        void * VAR1 = *VAR3;
        {
            
            size_t VAR5 = strlen((char *)VAR1);
            void * VAR6 = (void *)calloc(VAR5+1, 1);
            memcpy(VAR6, VAR1, (VAR5+1));
            FUN2((char *)VAR6);
            free(VAR6);
        }
    }
}