'use client';
import React, { Component, useState } from 'react'
import Header from "@/Components/Header"

const page = () => {
const [num, setnum] = useState(80);

  return (
    <>
    <div>
      <h1 className='absolute top-50 left-70 text-9xl'>my marks were {num}</h1>
      <button onClick={()=>{
        setnum(33)
      }} className='rounded p-3 border-2 m-7'>update</button>
    </div>
    </>
    
  )
}

export default page
