"use client"
import axios from 'axios'
import React from 'react'

const page = () => {
  const getimage=async ()=>{
  try {
    const response=await axios.get("https://picsum.photos/v2/list?page=2&limit=100")
  console.log(response);
  } catch (error) {
    console.error(error ,"error aa gya h")
  }
  }
  return (
    <div>
      <button className='rounded ' onClick={getimage}>getimage</button>
    </div>
  )
}

export default page
