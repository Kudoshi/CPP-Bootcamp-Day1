#include "EnemySpawner.hpp"

int EnemySpawner::spawn()
{
    if (m_spawned < m_count)
    {
        m_spawned++;
    }

    return m_spawned;

}
